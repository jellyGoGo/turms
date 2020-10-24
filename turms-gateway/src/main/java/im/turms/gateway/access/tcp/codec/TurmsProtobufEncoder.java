/*
 * Copyright (C) 2019 The Turms Project
 * https://github.com/turms-im/turms
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

package im.turms.gateway.access.tcp.codec;

import com.google.protobuf.MessageLite;
import com.google.protobuf.MessageLiteOrBuilder;
import im.turms.server.common.util.ProtoUtil;
import io.netty.channel.ChannelHandlerContext;
import io.netty.handler.codec.MessageToMessageEncoder;

import java.util.List;

/**
 * Don't use ProtobufEncoder in Netty because it uses heap memory.
 *
 * @author James Chen
 * @see io.netty.handler.codec.protobuf.ProtobufEncoder
 */
public class TurmsProtobufEncoder extends MessageToMessageEncoder<MessageLiteOrBuilder> {

    @Override
    protected void encode(ChannelHandlerContext ctx, MessageLiteOrBuilder messageLiteOrBuilder, List<Object> out) {
        MessageLite message;
        if (messageLiteOrBuilder instanceof MessageLite.Builder) {
            message = ((MessageLite.Builder) messageLiteOrBuilder).build();
        } else {
            message = (MessageLite) messageLiteOrBuilder;
        }
        out.add(ProtoUtil.getDirectByteBuffer(message));
    }

}
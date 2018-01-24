//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolDebuggerLocation, RWIProtocolRuntimeRemoteObject;

@interface RWIProtocolDOMEventListener : RWIProtocolJSONObject
{
}

@property(nonatomic) _Bool disabled;
@property(nonatomic) _Bool once;
@property(nonatomic) _Bool passive;
@property(retain, nonatomic) RWIProtocolRuntimeRemoteObject *handler;
@property(copy, nonatomic) NSString *sourceName;
@property(retain, nonatomic) RWIProtocolDebuggerLocation *location;
@property(copy, nonatomic) NSString *handlerBody;
@property(nonatomic) int nodeId;
@property(nonatomic) _Bool isAttribute;
@property(nonatomic) _Bool useCapture;
@property(copy, nonatomic) NSString *type;
@property(nonatomic) int eventListenerId;
- (id)initWithEventListenerId:(int)arg1 type:(id)arg2 useCapture:(_Bool)arg3 isAttribute:(_Bool)arg4 nodeId:(int)arg5 handlerBody:(id)arg6;

@end


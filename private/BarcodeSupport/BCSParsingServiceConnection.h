//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSXPCConnection;

__attribute__((visibility("hidden")))
@interface BCSParsingServiceConnection : NSObject
{
    NSXPCConnection *_parsingServiceConnection;
}

@property(retain, nonatomic) NSXPCConnection *parsingServiceConnection; // @synthesize parsingServiceConnection=_parsingServiceConnection;
- (void).cxx_destruct;
- (void)parseQRCodeFeature:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)parseQRCodeMetadata:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)parseQRCodeString:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)dealloc;

@end


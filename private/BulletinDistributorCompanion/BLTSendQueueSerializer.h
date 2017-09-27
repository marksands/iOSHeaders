//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL;

@interface BLTSendQueueSerializer : NSObject
{
    _Bool _usesMessageIdentifiers;
    NSURL *_sendFileURL;
}

@property(readonly, nonatomic) _Bool usesMessageIdentifiers; // @synthesize usesMessageIdentifiers=_usesMessageIdentifiers;
@property(copy, nonatomic) NSURL *sendFileURL; // @synthesize sendFileURL=_sendFileURL;
- (void).cxx_destruct;
- (void)handleFileURL:(id)arg1 protobufHandler:(id)arg2;
- (void)sendWithSender:(id)arg1 timeout:(id)arg2 responseHandlers:(id)arg3 didSend:(CDUnknownBlockType)arg4 didQueue:(CDUnknownBlockType)arg5;
- (void)add:(id)arg1 type:(unsigned short)arg2 messageIdentifier:(id *)arg3;
- (void)add:(id)arg1 type:(unsigned short)arg2;
- (void)cleanup;
- (id)initWithUsesMessageIdentifiers:(_Bool)arg1;

@end


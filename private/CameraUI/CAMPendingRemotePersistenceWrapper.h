//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CAMCaptureRequest, NSDate, NSMutableDictionary;

@interface CAMPendingRemotePersistenceWrapper : NSObject
{
    CAMCaptureRequest *_request;
    NSDate *_creationDate;
    NSMutableDictionary *_job;
    CDUnknownBlockType _completionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) NSMutableDictionary *job; // @synthesize job=_job;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, nonatomic) CAMCaptureRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (id)initWithRequest:(id)arg1 creationDate:(id)arg2 job:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MailboxPrediction/MPActionLogging-Protocol.h>

@class NSString;

@interface MPActionLogger : NSObject <MPActionLogging>
{
    NSString *_modelName;
}

@property(retain, nonatomic) NSString *modelName; // @synthesize modelName=_modelName;
- (void).cxx_destruct;
- (id)initWithModelName:(id)arg1;
- (void)logKeySet:(id)arg1;
- (void)logUserAction:(unsigned long long)arg1 inContext:(unsigned long long)arg2 forMessage:(id)arg3 available:(id)arg4 displayed:(id)arg5 selected:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

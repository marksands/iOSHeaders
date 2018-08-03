//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSURL;

@interface USWebpageUsage : NSObject
{
    NSObject *_stateLock;
    long long _state;
    NSURL *_URL;
    NSDate *_inUseStartDate;
    NSDate *_inFocusStartDate;
}

+ (id)_xpcConnection;
@property(retain) NSDate *inFocusStartDate; // @synthesize inFocusStartDate=_inFocusStartDate;
@property(retain) NSDate *inUseStartDate; // @synthesize inUseStartDate=_inUseStartDate;
@property(readonly) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (void)changeState:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithURL:(id)arg1;

@end


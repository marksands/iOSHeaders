//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iTunesCloud/ICAsyncOperation.h>

@class NSObject<OS_dispatch_queue>, SSVPlayActivityController;

@interface ICFlushPlayActivityEventsOperation : ICAsyncOperation
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    SSVPlayActivityController *_playActivityController;
}

@property(readonly, nonatomic) SSVPlayActivityController *playActivityController; // @synthesize playActivityController=_playActivityController;
- (void).cxx_destruct;
- (void)execute;
- (id)initWithPlayActivityController:(id)arg1;
- (id)init;

@end


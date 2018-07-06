//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NUVideoViewControllerFactory.h"

@class NSString;

@interface NUVideoViewControllerFactory : NSObject <NUVideoViewControllerFactory>
{
    id <NFResolver> _resolver;
}

@property(readonly, nonatomic) id <NFResolver> resolver; // @synthesize resolver=_resolver;
- (void).cxx_destruct;
- (id)createVideoViewControllerWithItems:(id)arg1 visibilityMonitor:(id)arg2 eventTrackerConfiguration:(id)arg3 externalAnalyticsReferrer:(id)arg4 placement:(id)arg5 discoverMoreVideosInfo:(id)arg6 activityViewControllerFactory:(id)arg7;
- (id)initWithResolver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUErrorMessageFactory-Protocol.h>

@class FCNetworkReachability, NSString;

@interface NUErrorMessageFactory : NSObject <NUErrorMessageFactory>
{
    FCNetworkReachability *_networkReachability;
}

@property(readonly, nonatomic) FCNetworkReachability *networkReachability; // @synthesize networkReachability=_networkReachability;
- (void).cxx_destruct;
- (id)errorMessageForTitle:(id)arg1 subtitle:(id)arg2;
- (id)errorMessageForArticleViewWithOfflineReason:(long long)arg1;
- (id)errorMessageForArticleView;
- (id)initWithNetworkReachability:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


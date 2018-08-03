//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXHorizontalCollectionGadgetProvider.h>

#import "PXForYouRankable.h"

@class NSDate;

@interface PXForYouRecentInterestHorizontalGadgetProvider : PXHorizontalCollectionGadgetProvider <PXForYouRankable>
{
    NSDate *_cachedPriorityDate;
}

@property(retain, nonatomic) NSDate *cachedPriorityDate; // @synthesize cachedPriorityDate=_cachedPriorityDate;
- (void).cxx_destruct;
- (void)resetPriorityDate;
@property(readonly, nonatomic) long long defaultPriority;
@property(readonly, nonatomic) long long priorityType;
@property(readonly, nonatomic) NSDate *priorityDate;
- (_Bool)supportsDynamicRanking;
- (id)initWithContentGadgetProviders:(id)arg1 title:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) unsigned long long gadgetType;

@end


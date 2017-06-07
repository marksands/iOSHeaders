//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItemManager.h>

@class HFItemProvider;
@protocol HUCCFavoriteItemProvider;

@interface HUCCGridItemManager : HFItemManager
{
    unsigned long long _maximumNumberOfItems;
    unsigned long long _itemType;
    HFItemProvider<HUCCFavoriteItemProvider> *_favoriteItemProvider;
}

@property(retain, nonatomic) HFItemProvider<HUCCFavoriteItemProvider> *favoriteItemProvider; // @synthesize favoriteItemProvider=_favoriteItemProvider;
@property(readonly, nonatomic) unsigned long long itemType; // @synthesize itemType=_itemType;
@property(nonatomic) unsigned long long maximumNumberOfItems; // @synthesize maximumNumberOfItems=_maximumNumberOfItems;
- (void).cxx_destruct;
- (CDUnknownBlockType)_comparatorForSectionIdentifier:(id)arg1;
- (id)_itemForSorting;
- (id)_buildItemProvidersForHome:(id)arg1;
- (void)reloadForMaximumNumberOfItemsChange;
- (id)initWithDelegate:(id)arg1 itemType:(unsigned long long)arg2;

@end


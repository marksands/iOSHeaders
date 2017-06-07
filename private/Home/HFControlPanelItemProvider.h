//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItemProvider.h>

@class HFItem, NSSet;
@protocol HFCharacteristicValueSource, NSCopying;

@interface HFControlPanelItemProvider : HFItemProvider
{
    HFItem<NSCopying> *_item;
    id <HFCharacteristicValueSource> _valueSource;
    CDUnknownBlockType _filter;
    NSSet *_controlPanelItems;
}

+ (_Bool)prefersNonBlockingReloads;
@property(copy, nonatomic) NSSet *controlPanelItems; // @synthesize controlPanelItems=_controlPanelItems;
@property(copy, nonatomic) CDUnknownBlockType filter; // @synthesize filter=_filter;
@property(readonly, nonatomic) id <HFCharacteristicValueSource> valueSource; // @synthesize valueSource=_valueSource;
@property(readonly, copy, nonatomic) HFItem<NSCopying> *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (CDUnknownBlockType)controlPanelItemComparator;
- (id)items;
- (id)invalidationReasons;
- (id)reloadItems;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithItem:(id)arg1 valueSource:(id)arg2;

@end


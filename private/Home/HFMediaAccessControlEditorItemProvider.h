//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Home/HFStaticItemProvider.h>

@class HFStaticItem, HMHome, NSArray, NSMutableDictionary;

@interface HFMediaAccessControlEditorItemProvider : HFStaticItemProvider
{
    HMHome *_home;
    NSArray *_accessControlItems;
    HFStaticItem *_passwordEnableItem;
    HFStaticItem *_passwordItem;
    NSMutableDictionary *_itemForIdentifier;
}

@property(readonly, nonatomic) NSMutableDictionary *itemForIdentifier; // @synthesize itemForIdentifier=_itemForIdentifier;
@property(copy, nonatomic) HFStaticItem *passwordItem; // @synthesize passwordItem=_passwordItem;
@property(copy, nonatomic) HFStaticItem *passwordEnableItem; // @synthesize passwordEnableItem=_passwordEnableItem;
@property(copy, nonatomic) NSArray *accessControlItems; // @synthesize accessControlItems=_accessControlItems;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
- (void).cxx_destruct;
- (id)items;
- (id)_buildItems;
- (id)initWithItems:(id)arg1;
- (id)initWithHome:(id)arg1;

@end


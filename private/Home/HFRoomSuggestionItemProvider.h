//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItemProvider.h>

@class HMHome, NSSet;
@protocol HFRoomSuggestionVendor;

@interface HFRoomSuggestionItemProvider : HFItemProvider
{
    unsigned long long _suggestedRoomLimit;
    HMHome *_home;
    NSSet *_suggestionItems;
    id <HFRoomSuggestionVendor> _suggestionVendor;
}

@property(retain, nonatomic) id <HFRoomSuggestionVendor> suggestionVendor; // @synthesize suggestionVendor=_suggestionVendor;
@property(retain, nonatomic) NSSet *suggestionItems; // @synthesize suggestionItems=_suggestionItems;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property(nonatomic) unsigned long long suggestedRoomLimit; // @synthesize suggestedRoomLimit=_suggestedRoomLimit;
- (void).cxx_destruct;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithHome:(id)arg1;

@end


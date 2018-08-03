//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKitCore/_UIStatusBarItem.h>

@class _UIBatteryView, _UIStatusBarImageView, _UIStatusBarStringView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarBatteryItem : _UIStatusBarItem
{
    _Bool _highlighted;
    _UIBatteryView *_batteryView;
    _UIStatusBarImageView *_chargingView;
    _UIStatusBarStringView *_percentView;
}

+ (id)percentDisplayIdentifier;
+ (id)chargingDisplayIdentifier;
+ (id)iconDisplayIdentifier;
@property(retain, nonatomic) _UIStatusBarStringView *percentView; // @synthesize percentView=_percentView;
@property(retain, nonatomic) _UIStatusBarImageView *chargingView; // @synthesize chargingView=_chargingView;
@property(retain, nonatomic) _UIBatteryView *batteryView; // @synthesize batteryView=_batteryView;
@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
- (void).cxx_destruct;
- (id)viewForIdentifier:(id)arg1;
- (void)prepareForHighlighting;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)dependentEntryKeys;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKitCore/_UIStatusBarItem.h>

@class _UIStatusBarStringView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarNavigationItem : _UIStatusBarItem
{
    _UIStatusBarStringView *_nameView;
}

@property(retain, nonatomic) _UIStatusBarStringView *nameView; // @synthesize nameView=_nameView;
- (void).cxx_destruct;
- (id)viewForIdentifier:(id)arg1;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)createDisplayItemForIdentifier:(id)arg1;
- (id)dependentEntryKeys;

@end


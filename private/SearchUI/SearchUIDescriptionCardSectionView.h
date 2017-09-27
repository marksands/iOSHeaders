//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SearchUI/SearchUICardSectionView.h>

#import "TLKDescriptionViewDelegate.h"

@class NSString, TLKDescriptionView;

@interface SearchUIDescriptionCardSectionView : SearchUICardSectionView <TLKDescriptionViewDelegate>
{
    _Bool _expanded;
}

+ (id)dragSubtitleForCardSection:(id)arg1;
+ (id)dragTitleForCardSection:(id)arg1;
+ (_Bool)supportsRecyclingForCardSection:(id)arg1;
@property _Bool expanded; // @synthesize expanded=_expanded;
- (void)didPressMoreButton;
- (void)updateWithCardSection:(id)arg1;
- (id)setupContentView;

// Remaining properties
@property(retain) TLKDescriptionView *contentView; // @dynamic contentView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SearchUI/SearchUICardSectionView.h>

@class TLKSimpleRowView;

@interface SearchUIRowCardSectionView : SearchUICardSectionView
{
}

+ (id)dragSubtitleForCardSection:(id)arg1;
+ (id)dragTitleForCardSection:(id)arg1;
+ (double)separatorInsetForLeadingImageForSection:(id)arg1;
+ (_Bool)supportsRecyclingForCardSection:(id)arg1;
- (void)updateWithCardSection:(id)arg1;
- (id)setupContentView;

// Remaining properties
@property(retain) TLKSimpleRowView *contentView; // @dynamic contentView;

@end


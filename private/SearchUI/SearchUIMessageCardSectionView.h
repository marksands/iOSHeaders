//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SearchUI/SearchUICardSectionView.h>

@class TLKMessageView;

@interface SearchUIMessageCardSectionView : SearchUICardSectionView
{
}

+ (_Bool)supportsRecyclingForCardSection:(id)arg1;
- (void)updateWithCardSection:(id)arg1;
- (unsigned long long *)messageStatusForSearchUIMessageStatus:(int)arg1;
- (unsigned long long *)messageServiceTypeForSearchUIMessageServiceType:(int)arg1;
- (id)setupContentView;

// Remaining properties
@property(retain) TLKMessageView *contentView; // @dynamic contentView;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SearchUI/SearchUICardSectionView.h>

@class NUIContainerStackView, SearchUIImageView, TLKEmojiableVibrantLabel;

@interface SearchUISuggestionCardSectionView : SearchUICardSectionView
{
    SearchUIImageView *_iconView;
    TLKEmojiableVibrantLabel *_suggestionLabel;
}

+ (id)suggestedContactIconWithStyle:(unsigned long long)arg1;
+ (id)suggestedQueryIconWithStyle:(unsigned long long)arg1;
+ (id)_imageForSuggestion:(id)arg1 withStyle:(unsigned long long)arg2;
+ (_Bool)supportsRecyclingForCardSection:(id)arg1;
@property(retain) TLKEmojiableVibrantLabel *suggestionLabel; // @synthesize suggestionLabel=_suggestionLabel;
@property(retain) SearchUIImageView *iconView; // @synthesize iconView=_iconView;
- (void).cxx_destruct;
- (void)updateWithCardSection:(id)arg1;
- (id)setupContentView;

// Remaining properties
@property(retain) NUIContainerStackView *contentView; // @dynamic contentView;

@end


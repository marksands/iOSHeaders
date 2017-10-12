//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SearchUI/SearchUICardSectionView.h>

#import "NUIContainerStackViewDelegate.h"
#import "SearchUICardSectionViewUpdatable.h"
#import "SearchUISelectableTextViewDelegate.h"

@class NSString, SKUIPlayButton, TLKStackView;

@interface SearchUIAudioPlaybackCardSectionView : SearchUICardSectionView <NUIContainerStackViewDelegate, SearchUISelectableTextViewDelegate, SearchUICardSectionViewUpdatable>
{
    SKUIPlayButton *_playButton;
}

@property(retain, nonatomic) SKUIPlayButton *playButton; // @synthesize playButton=_playButton;
- (void).cxx_destruct;
- (void)selectableTextView:(id)arg1 presentViewController:(id)arg2;
- (void)_updateStateFromCardSection:(id)arg1 animated:(_Bool)arg2;
- (void)_playButtonPressed:(id)arg1;
- (void)updateStateFromCardSection:(id)arg1;
- (id)setupContentView;
- (id)initWithCardSection:(id)arg1 style:(unsigned long long)arg2 feedbackDelegate:(id)arg3;

// Remaining properties
@property(retain) TLKStackView *contentView; // @dynamic contentView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

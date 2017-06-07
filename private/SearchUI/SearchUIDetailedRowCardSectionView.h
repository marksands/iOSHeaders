//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SearchUI/SearchUILayoutFreeSectionView.h>

#import <SearchUI/NUIContainerStackViewDelegate-Protocol.h>

@class NSMutableDictionary, NSString, SearchUIAccessoryViewController, SearchUIThumbnailView, TLKDetailsView, TLKStackView, UIButton;

@interface SearchUIDetailedRowCardSectionView : SearchUILayoutFreeSectionView <NUIContainerStackViewDelegate>
{
    SearchUIThumbnailView *_thumbnailView;
    UIButton *_buttonView;
    TLKDetailsView *_detailsView;
    TLKStackView *_outerStackView;
    TLKStackView *_innerStackView;
    NSMutableDictionary *_accessoryViewControllers;
    SearchUIAccessoryViewController *_accessoryViewControllerForSection;
}

+ (id)dragSubtitleForCardSection:(id)arg1;
+ (id)dragTitleForCardSection:(id)arg1;
+ (void)addViewIfNecessary:(id)arg1 toStackView:(id)arg2 removeFromStackView:(id)arg3;
+ (_Bool)supportsRecyclingForCardSection:(id)arg1;
@property(retain) SearchUIAccessoryViewController *accessoryViewControllerForSection; // @synthesize accessoryViewControllerForSection=_accessoryViewControllerForSection;
@property(retain) NSMutableDictionary *accessoryViewControllers; // @synthesize accessoryViewControllers=_accessoryViewControllers;
@property(retain) TLKStackView *innerStackView; // @synthesize innerStackView=_innerStackView;
@property(retain) TLKStackView *outerStackView; // @synthesize outerStackView=_outerStackView;
@property(retain) TLKDetailsView *detailsView; // @synthesize detailsView=_detailsView;
@property(retain) UIButton *buttonView; // @synthesize buttonView=_buttonView;
@property(retain) SearchUIThumbnailView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
- (void).cxx_destruct;
- (void)buttonPressed;
- (struct CGRect)containerView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(struct CGRect)arg3;
- (long long)containerStackView:(id)arg1 alignmentForArrangedSubview:(id)arg2;
- (_Bool)arrangedViewMustCenter:(id)arg1;
- (void)updateWithCardSection:(id)arg1;
- (id)initWithCardSection:(id)arg1 controller:(id)arg2 style:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


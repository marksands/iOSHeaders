//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TemplateKit/TLKView.h>

#import <TemplateKit/NUIContainerStackViewDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString, NUIContainerStackView;

@interface TLKImagesView : TLKView <NUIContainerStackViewDelegate>
{
    NSArray *_images;
    NSMutableArray *_imageViews;
    NUIContainerStackView *_stackView;
}

@property(retain) NUIContainerStackView *stackView; // @synthesize stackView=_stackView;
@property(retain) NSMutableArray *imageViews; // @synthesize imageViews=_imageViews;
@property(retain) NSArray *images; // @synthesize images=_images;
- (void).cxx_destruct;
- (struct CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(struct CGSize)arg2 forArrangedSubview:(id)arg3;
- (void)updateWithImages:(id)arg1;
- (void)observedPropertiesChanged;
- (id)observableProperties;
- (void)styleDidChange:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


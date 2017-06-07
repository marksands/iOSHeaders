//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PassKitUI/PKPGSVSectionSubheaderView-Protocol.h>

@class NSAttributedString, NSMutableArray, NSString, UIActivityIndicatorView, UIImage, UIImageView, UITextView;

@interface PKWelcomeView : UIView <PKPGSVSectionSubheaderView>
{
    UIImageView *_backgroundView;
    UIImageView *_shadowView;
    UIImageView *_headerView;
    UITextView *_messageView;
    UIActivityIndicatorView *_activityIndicator;
    _Bool _showActivityIndicator;
    UIImage *_headerImage;
    NSAttributedString *_message;
    NSMutableArray *_actionButtons;
}

+ (struct UIEdgeInsets)textInsets;
+ (id)messageFont;
+ (id)buttonWithTitle:(id)arg1;
+ (double)bottomMargin;
+ (struct CGSize)headerImageSize;
+ (struct UIEdgeInsets)headerImageMargins;
+ (double)defaultHeight;
+ (_Bool)isAvailable;
+ (double)buttonHeight;
+ (double)buttonSpacing;
+ (double)textToButtonSpacing;
@property(retain, nonatomic) NSMutableArray *actionButtons; // @synthesize actionButtons=_actionButtons;
@property(copy, nonatomic) NSAttributedString *message; // @synthesize message=_message;
@property(retain, nonatomic) UIImage *headerImage; // @synthesize headerImage=_headerImage;
@property(nonatomic) _Bool showActivityIndicator; // @synthesize showActivityIndicator=_showActivityIndicator;
- (void).cxx_destruct;
- (void)addActionButton:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithHeight:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (_Bool)needsUpdate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


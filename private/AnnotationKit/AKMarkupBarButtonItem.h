//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIBarButtonItem.h"

@class AKMarkupButtonContainerView, UIButton, UIImage;

@interface AKMarkupBarButtonItem : UIBarButtonItem
{
    UIButton *_toggleButton;
    AKMarkupButtonContainerView *_toggleView;
    UIImage *_toggleButtonImage;
}

+ (id)markupBarButtonWithTarget:(id)arg1 action:(SEL)arg2;
@property(retain, nonatomic) UIImage *toggleButtonImage; // @synthesize toggleButtonImage=_toggleButtonImage;
@property(retain, nonatomic) AKMarkupButtonContainerView *toggleView; // @synthesize toggleView=_toggleView;
@property(retain, nonatomic) UIButton *toggleButton; // @synthesize toggleButton=_toggleButton;
- (void).cxx_destruct;
- (void)setEnabled:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setAction:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (id)init;

@end


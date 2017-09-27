//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSLayoutConstraint, NotesTextureView;

@interface NotesTextureBackgroundView : UIView
{
    _Bool _scrollsTexture;
    NotesTextureView *_textureView;
    NSLayoutConstraint *_textureYConstraint;
    NSLayoutConstraint *_textureHeightConstraint;
}

+ (id)colorWithPaperTexturePatternImage;
+ (id)textureImage;
@property(retain, nonatomic) NSLayoutConstraint *textureHeightConstraint; // @synthesize textureHeightConstraint=_textureHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *textureYConstraint; // @synthesize textureYConstraint=_textureYConstraint;
@property _Bool scrollsTexture; // @synthesize scrollsTexture=_scrollsTexture;
@property(readonly, nonatomic) NotesTextureView *textureView; // @synthesize textureView=_textureView;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)commonInitWithScrollingTextures:(_Bool)arg1 hasAlpha:(_Bool)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 scrollingTextures:(_Bool)arg2 hasAlpha:(_Bool)arg3;
- (double)heightByCoveringHeight:(double)arg1 withImage:(id)arg2;

@end


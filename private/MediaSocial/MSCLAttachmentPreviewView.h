//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MSCLAttachment, UIButton, UIControl;

@interface MSCLAttachmentPreviewView : UIView
{
    MSCLAttachment *_attachment;
    UIView *_childView;
    UIButton *_removeButton;
}

@property(readonly, nonatomic) UIControl *removeButton; // @synthesize removeButton=_removeButton;
@property(readonly, nonatomic) MSCLAttachment *attachment; // @synthesize attachment=_attachment;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithAttachment:(id)arg1 childView:(id)arg2;
- (id)initWithAttachment:(id)arg1 clientContext:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end


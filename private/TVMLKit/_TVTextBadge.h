//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSAttributedString, NSString, UIColor;

__attribute__((visibility("hidden")))
@interface _TVTextBadge : UIView
{
    NSAttributedString *_text;
    NSString *_type;
    UIColor *_tintColor;
    double _cornerRadius;
}

+ (id)textBadgeViewWithElement:(id)arg1 existingView:(id)arg2;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSAttributedString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSAttributedString, NSString, UIImage;

@interface NUTextAndGlyph : NSObject
{
    NSAttributedString *_attributedText;
    NSString *_text;
    UIImage *_glyph;
}

@property(readonly, nonatomic) UIImage *glyph; // @synthesize glyph=_glyph;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
- (void).cxx_destruct;
- (id)init;
- (id)initWithText:(id)arg1 glyph:(id)arg2;
- (id)initWithAttributedText:(id)arg1 glyph:(id)arg2;
- (id)initWithAttributedText:(id)arg1 text:(id)arg2 glyph:(id)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIFont;

__attribute__((visibility("hidden")))
@interface _MKCompassViewSizeParameter : NSObject
{
    NSString *_imageNamePart;
    double _diameter;
    UIFont *_font;
    double _textOffsetFromCenter;
}

@property(nonatomic) double textOffsetFromCenter; // @synthesize textOffsetFromCenter=_textOffsetFromCenter;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(nonatomic) double diameter; // @synthesize diameter=_diameter;
@property(copy, nonatomic) NSString *imageNamePart; // @synthesize imageNamePart=_imageNamePart;
- (void).cxx_destruct;

@end


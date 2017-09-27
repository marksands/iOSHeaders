//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKImageProvider, CLKTextProvider;

@interface CLKComplicationTemplateModularLargeColumns : CLKComplicationTemplate
{
    _Bool _useNoColumnPadding;
    CLKTextProvider *_row1Column1TextProvider;
    CLKTextProvider *_row1Column2TextProvider;
    CLKTextProvider *_row2Column1TextProvider;
    CLKTextProvider *_row2Column2TextProvider;
    CLKTextProvider *_row3Column1TextProvider;
    CLKTextProvider *_row3Column2TextProvider;
    CLKImageProvider *_row1ImageProvider;
    CLKImageProvider *_row2ImageProvider;
    CLKImageProvider *_row3ImageProvider;
    long long _column2Alignment;
}

@property(nonatomic) _Bool useNoColumnPadding; // @synthesize useNoColumnPadding=_useNoColumnPadding;
@property(nonatomic) long long column2Alignment; // @synthesize column2Alignment=_column2Alignment;
@property(copy, nonatomic) CLKImageProvider *row3ImageProvider; // @synthesize row3ImageProvider=_row3ImageProvider;
@property(copy, nonatomic) CLKImageProvider *row2ImageProvider; // @synthesize row2ImageProvider=_row2ImageProvider;
@property(copy, nonatomic) CLKImageProvider *row1ImageProvider; // @synthesize row1ImageProvider=_row1ImageProvider;
@property(copy, nonatomic) CLKTextProvider *row3Column2TextProvider; // @synthesize row3Column2TextProvider=_row3Column2TextProvider;
@property(copy, nonatomic) CLKTextProvider *row3Column1TextProvider; // @synthesize row3Column1TextProvider=_row3Column1TextProvider;
@property(copy, nonatomic) CLKTextProvider *row2Column2TextProvider; // @synthesize row2Column2TextProvider=_row2Column2TextProvider;
@property(copy, nonatomic) CLKTextProvider *row2Column1TextProvider; // @synthesize row2Column1TextProvider=_row2Column1TextProvider;
@property(copy, nonatomic) CLKTextProvider *row1Column2TextProvider; // @synthesize row1Column2TextProvider=_row1Column2TextProvider;
@property(copy, nonatomic) CLKTextProvider *row1Column1TextProvider; // @synthesize row1Column1TextProvider=_row1Column1TextProvider;
- (void).cxx_destruct;
- (void)_enumerateIntegerKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateImageProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)isCompatibleWithFamily:(long long)arg1;

@end


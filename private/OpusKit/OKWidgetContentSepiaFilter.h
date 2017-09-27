//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OpusKit/OKWidgetBasicFilter.h>

#import "JSOKWidgetContentSepiaFilter.h"

@class NSNumber;

@interface OKWidgetContentSepiaFilter : OKWidgetBasicFilter <JSOKWidgetContentSepiaFilter>
{
    NSNumber *_inputIntensity;
}

+ (id)filterWithIntensity:(id)arg1;
+ (void)setupJavascriptContext:(id)arg1;
+ (id)supportedSettings;
@property(retain, nonatomic) NSNumber *inputIntensity; // @synthesize inputIntensity=_inputIntensity;
- (id)outputImage;
- (id)inputKeys;
- (id)settingInputIntensity;
- (void)setSettingInputIntensity:(id)arg1;
- (void)dealloc;

@end


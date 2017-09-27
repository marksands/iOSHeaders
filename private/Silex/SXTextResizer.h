//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SXColumnLayout, SXComponentTextStyle;

@interface SXTextResizer : NSObject
{
    SXColumnLayout *_columnLayout;
    SXComponentTextStyle *_defaultTextStyle;
}

@property(retain, nonatomic) SXComponentTextStyle *defaultTextStyle; // @synthesize defaultTextStyle=_defaultTextStyle;
@property(retain, nonatomic) SXColumnLayout *columnLayout; // @synthesize columnLayout=_columnLayout;
- (void).cxx_destruct;
- (unsigned long long)resizeDropCapNumberOfLines:(long long)arg1;
- (long long)resizeTextSize:(long long)arg1 fontResizingThreshold:(double)arg2 fontSizeConstant:(double)arg3 contentSizeCategory:(id)arg4 fontTextStyle:(id)arg5;
- (id)initWithColumnLayout:(id)arg1 andDefaultTextStyle:(id)arg2;

@end


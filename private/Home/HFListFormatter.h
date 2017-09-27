//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSFormatter.h"

@class NSLocale;

@interface HFListFormatter : NSFormatter
{
    NSLocale *_locale;
    unsigned long long _listStyle;
    struct UListFormatter *_formatter;
}

@property(nonatomic) struct UListFormatter *formatter; // @synthesize formatter=_formatter;
@property(nonatomic) unsigned long long listStyle; // @synthesize listStyle=_listStyle;
- (void).cxx_destruct;
- (id)_formatAndListWithElements:(id)arg1;
- (id)_formatOrListWithElements:(id)arg1;
- (id)stringForObjectValue:(id)arg1;
@property(copy, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
- (void)_invaildateFormatter;
- (void)dealloc;

@end


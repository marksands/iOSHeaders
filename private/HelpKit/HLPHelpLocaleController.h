//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HelpKit/HLPRemoteDataController.h>

@class NSArray, NSURL;

@interface HLPHelpLocaleController : HLPRemoteDataController
{
    NSArray *_supportedLanguageCodes;
    NSURL *_helpBookURL;
    NSArray *_preferredLanguagesOverride;
    NSArray *_locales;
}

@property(retain, nonatomic) NSArray *locales; // @synthesize locales=_locales;
@property(retain, nonatomic) NSArray *preferredLanguagesOverride; // @synthesize preferredLanguagesOverride=_preferredLanguagesOverride;
- (void).cxx_destruct;
- (id)currentLocale;
- (id)localeWithPreferredLanguages:(id)arg1;
- (id)englishLocale;
- (void)processData:(id)arg1 formattedData:(id)arg2;
- (void)processFileURLWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithURL:(id)arg1;

@end


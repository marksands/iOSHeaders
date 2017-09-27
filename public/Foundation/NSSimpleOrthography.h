//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSOrthography.h>

@interface NSSimpleOrthography : NSOrthography
{
    unsigned int _orthographyFlags;
}

+ (_Bool)supportsSecureCoding;
+ (id)orthographyWithFlags:(unsigned int)arg1;
+ (void)initialize;
- (id)allLanguages;
- (id)allScripts;
- (id)dominantLanguage;
- (id)dominantLanguageForScript:(id)arg1;
- (id)languagesForScript:(id)arg1;
- (unsigned int)orthographyFlags;
- (id)languageMap;
- (id)dominantScript;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (Class)classForCoder;
- (id)initWithDominantScript:(id)arg1 languageMap:(id)arg2;
- (id)initWithFlags:(unsigned int)arg1;

@end


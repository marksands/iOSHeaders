//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Search/SFSearchResult_SpotlightExtras.h>

#import "NSCopying.h"

@class NSString;

@interface SFSearchResult_Compatibility : SFSearchResult_SpotlightExtras <NSCopying>
{
}

- (void)writeTo:(id)arg1;
- (id)section_header;
- (_Bool)isQuickGlance;
- (id)uniqueIdentifier;
- (void)setUniqueIdentifier:(id)arg1;
@property(retain, nonatomic) NSString *externalIdentifier;
@property(retain, nonatomic) NSString *resultIdentifier;
- (id)simpleTitle;
- (void)setSimpleTitle:(id)arg1;
@property(retain, nonatomic) NSString *compatibilityTitle;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (Class)classForCoder;
- (Class)classForKeyedArchiver;
- (id)debugDescription;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class TSSPropertyMap;

@interface TSWPLineStyling : NSObject <NSCopying>
{
    long long _lineCount;
    unsigned long long _options;
    TSSPropertyMap *_additionalCharacterStylePropertyMap;
    TSSPropertyMap *_overrideCharacterStylePropertyMap;
}

+ (id)lineStylingWithLineCount:(long long)arg1 options:(unsigned long long)arg2 additionalCharacterStylePropertyMap:(id)arg3 overrideCharacterStylePropertyMap:(id)arg4;
@property(readonly, retain, nonatomic) TSSPropertyMap *overrideCharacterStylePropertyMap; // @synthesize overrideCharacterStylePropertyMap=_overrideCharacterStylePropertyMap;
@property(readonly, retain, nonatomic) TSSPropertyMap *additionalCharacterStylePropertyMap; // @synthesize additionalCharacterStylePropertyMap=_additionalCharacterStylePropertyMap;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) long long lineCount; // @synthesize lineCount=_lineCount;
- (id)description;
- (id)_optionsDescription;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithLineCount:(long long)arg1 options:(unsigned long long)arg2 additionalCharacterStylePropertyMap:(id)arg3 overrideCharacterStylePropertyMap:(id)arg4;

@end


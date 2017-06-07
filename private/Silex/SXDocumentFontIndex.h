//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXFontIndex-Protocol.h>

@class NSCache, NSDictionary, NSString;

@interface SXDocumentFontIndex : NSObject <SXFontIndex>
{
    NSDictionary *_fonts;
    NSCache *_attributeToFontIndex;
    NSCache *_fontToAttributeIndex;
}

+ (id)fontsFromDocument:(id)arg1;
@property(readonly, nonatomic) NSCache *fontToAttributeIndex; // @synthesize fontToAttributeIndex=_fontToAttributeIndex;
@property(readonly, nonatomic) NSCache *attributeToFontIndex; // @synthesize attributeToFontIndex=_attributeToFontIndex;
@property(readonly, nonatomic) NSDictionary *fonts; // @synthesize fonts=_fonts;
- (void).cxx_destruct;
- (id)fontAttributesForFontName:(id)arg1;
- (id)fontNameForFontAttributes:(id)arg1;
- (id)initWithDocument:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


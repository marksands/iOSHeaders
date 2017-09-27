//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSATSTypesetter;

@interface NSATSLineFragment : NSObject
{
    void *_line;
    NSATSTypesetter *_typesetter;
    struct _NSRange _glyphRange;
    struct _NSRange _characterRange;
    double _minPosition;
    double _maxPosition;
    long long _elasticCharIndex;
    double _elasticRangeWidth;
    unsigned int _hyphenGlyph;
    double _hyphenGlyphWidth;
    struct {
        unsigned int _directionState:2;
        unsigned int _drawsOutside:1;
        unsigned int _standaloneAttachment:1;
        unsigned int _reserved:28;
    } _flags;
}

- (_Bool)hasElasticRange;
- (void)justifyWithFactor:(double)arg1;
- (void)saveWithGlyphOrigin:(double)arg1;
- (void)saveMorphedGlyphs:(struct _NSRange *)arg1;
- (void)getTypographicLineHeight:(double *)arg1 baselineOffset:(double *)arg2 leading:(double *)arg3;
- (void)resolveOpticalAlignmentUpdatingMinPosition:(double *)arg1 maxPosition:(double *)arg2;
- (double)lineWidthForType:(int)arg1;
@property(readonly, getter=isStandaloneTextAttachment) _Bool standaloneTextAttachment;
- (struct _NSRange)characterRange;
- (struct _NSRange)glyphRange;
- (void)layoutForStartingGlyphAtIndex:(unsigned long long)arg1 characterIndex:(unsigned long long)arg2 minPosition:(double)arg3 maxPosition:(double)arg4 lineFragmentRect:(struct CGRect)arg5;
- (long long)resolvedLineBreakMode:(_Bool)arg1;
- (id)initWithTypesetter:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (long long)_charIndexToBreakLineByWordWrappingAtIndex:(long long)arg1 lineFragmentWidth:(double)arg2 hyphenate:(_Bool *)arg3;
- (id)_copyRenderingContextWithGlyphOrigin:(double)arg1;
- (void)_invalidate;
- (void)_flushCachedObjects;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, TSDLayout<TSWPLayoutTarget>, TSWPColumn;

@protocol TSWPTextWrap
- (_Bool)checkForUnobstructedSpan:(struct CGRect)arg1 wrappableAttachments:(NSArray *)arg2 userInfo:(id)arg3;
- (double)nextUnobstructedSpanStartingAt:(struct CGRect)arg1 wrappableAttachments:(NSArray *)arg2 userInfo:(id)arg3;
- (unsigned int)splitLine:(struct CGRect)arg1 lineSegmentRects:(out struct CGRect [128])arg2 wrappableAttachments:(NSArray *)arg3 ignoreFloatingGraphics:(_Bool)arg4 canvasCausedWrap:(out _Bool *)arg5 skipHint:(out double *)arg6 userInfo:(id)arg7;
- (id)beginWrappingToColumn:(TSWPColumn *)arg1 target:(TSDLayout<TSWPLayoutTarget> *)arg2 hasWrapables:(_Bool *)arg3;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TIDocumentState.h"

@interface TIDocumentState (UITextInputAdditions)
+ (id)documentStateOfSecureTextDocument:(id)arg1;
+ (id)documentStateOfDocumentWithRecentInputIdentifier:(id)arg1;
+ (id)documentStateOfDocument:(id)arg1;
- (id)initWithSecureTextDocument:(id)arg1;
- (id)initWithDocumentWithRecentInputIdentifier:(id)arg1;
- (id)initWithDocument:(id)arg1;
- (id)initWithDocument:(id)arg1 contextBoundary:(long long)arg2;
- (id)_contextAfterPosition:(id)arg1 inDocument:(id)arg2 toBoundary:(long long)arg3;
- (id)_contextBeforePosition:(id)arg1 inDocument:(id)arg2 toBoundary:(long long)arg3;
- (id)_positionFromPosition:(id)arg1 toPreviousWordStartInDocument:(id)arg2 tokenAccumulator:(CDUnknownBlockType)arg3;
- (id)_positionFromPosition:(id)arg1 toPreviousWordBoundaryInDocument:(id)arg2 tokenAccumulator:(CDUnknownBlockType)arg3;
- (id)copyTextInRange:(id)arg1 fromDocument:(id)arg2;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2 inDocument:(id)arg3;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSWPText.h>

@class TSDWrapSegments;

__attribute__((visibility("hidden")))
@interface TSCHTextWithInteriorWrapping : TSWPText
{
    TSDWrapSegments *_cachedInteriorWrapSegments;
}

- (void).cxx_destruct;
- (int)verticalAlignment;
- (_Bool)shrinkTextToFit;
- (id)interiorWrapPath;
- (id)interiorWrapSegments;
- (id)textWrapper;

@end


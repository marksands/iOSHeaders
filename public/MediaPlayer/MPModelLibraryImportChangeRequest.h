//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class MPSectionedCollection;

@interface MPModelLibraryImportChangeRequest : NSObject <NSCopying>
{
    _Bool _shouldLibraryAdd;
    MPSectionedCollection *_modelObjects;
}

@property(nonatomic) _Bool shouldLibraryAdd; // @synthesize shouldLibraryAdd=_shouldLibraryAdd;
@property(copy, nonatomic) MPSectionedCollection *modelObjects; // @synthesize modelObjects=_modelObjects;
- (void).cxx_destruct;
- (void)performWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end


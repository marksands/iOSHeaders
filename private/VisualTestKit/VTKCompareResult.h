//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIImage;

__attribute__((visibility("hidden")))
@interface VTKCompareResult : NSObject
{
    _Bool _succesfull;
    UIImage *_comparisonImage;
}

@property(readonly, nonatomic) UIImage *comparisonImage; // @synthesize comparisonImage=_comparisonImage;
@property(readonly, nonatomic, getter=isSuccesfull) _Bool succesfull; // @synthesize succesfull=_succesfull;
- (void).cxx_destruct;
- (id)initWithComparisonImage:(id)arg1 isSuccesfull:(_Bool)arg2;

@end


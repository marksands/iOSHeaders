//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface PKLinedPaper : NSObject <NSCopying>
{
    double _horizontalInset;
    struct CGPoint _lineSpacing;
}

@property(readonly, nonatomic) double horizontalInset; // @synthesize horizontalInset=_horizontalInset;
@property(readonly, nonatomic) struct CGPoint lineSpacing; // @synthesize lineSpacing=_lineSpacing;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLineSpacing:(struct CGPoint)arg1 horizontalInset:(double)arg2;

@end


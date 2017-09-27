//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IFVector.h"

@class NSString;

@interface IFVector : NSObject <IFVector>
{
    double *_vector;
    unsigned long long _length;
}

+ (id)ones:(unsigned long long)arg1;
+ (id)zeros:(unsigned long long)arg1;
+ (id)vectorWithElements:(double *)arg1 length:(unsigned long long)arg2;
@property unsigned long long length; // @synthesize length=_length;
@property double *vector; // @synthesize vector=_vector;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToVector:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (double)performScalarOperation:(id)arg1 other:(id)arg2;
- (id)performOperation:(id)arg1 other:(id)arg2;
- (void)dealloc;
- (id)initWithLength:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


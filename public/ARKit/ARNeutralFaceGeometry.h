//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ARNeutralFaceGeometry : NSObject
{
    vector_fff08e2a _verticesVector;
    struct vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))>> _texCoordinatesVector;
    struct vector<short, std::__1::allocator<short>> _trianglesIndicesVector;
}

+ (id)sharedNeutralGeometry;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long triangleCount;
@property(readonly, nonatomic) const short *triangleIndices;
@property(readonly, nonatomic) unsigned long long textureCoordinateCount;
// Error parsing type for property textureCoordinates:
// Property attributes: Tr^,R,N

@property(readonly, nonatomic) unsigned long long vertexCount;
// Error parsing type for property vertices:
// Property attributes: Tr^,R,N

- (id)initFromFaceKitSemantics;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Intents/INImage.h>

@class INImageBundle, NSString;

__attribute__((visibility("hidden")))
@interface _INBundleImage : INImage
{
    NSString *_imageName;
    INImageBundle *_imageBundle;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) INImageBundle *imageBundle; // @synthesize imageBundle=_imageBundle;
@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_copyWithSubclass:(Class)arg1;
- (id)_dictionaryRepresentation;
- (_Bool)_requiresRetrieval;
- (id)_identifier;
- (id)stringRepresentation;
- (id)initWithStringRepresentation:(id)arg1;
- (id)_URLRepresentation;
- (id)_initWithURLRepresentation:(id)arg1;
- (void)_loadImageDataAndSizeWithHelper:(id)arg1 accessSpecifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_in_bundleImageFileWritingPathWithFileName:(id)arg1;

@end


/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRSetupActivationResponse : TRResponseMessage {
    BOOL  _activated;
}

@property (nonatomic) BOOL activated;

+ (BOOL)supportsSecureCoding;

- (BOOL)activated;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setActivated:(BOOL)arg1;

@end
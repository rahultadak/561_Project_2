#define ONE_OVER_PI (0.31831f)

extern const float sine[256];
extern const float cosine[256];

float sin_lookup(float angle);
float cos_lookup(float angle);

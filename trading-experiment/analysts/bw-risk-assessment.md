# BW Risk Assessment — Risk Management Report

**Date: 2026-11-11 (Wednesday), ~09:42 ET** (14:41 UTC, live-verified via Robinhood `get_portfolio`, `get_equity_positions`, `get_equity_quotes` on account 424593861). Prior BW report: 2026-11-10, ~14:41 ET, **D-**. Persona file re-read fresh this run — no edits by Jash since last cycle; mandate, format, stance unchanged.

---

## Overall Portfolio Risk Grade: **D+** (up two notches from yesterday afternoon's D-)

Radical transparency cuts both ways: yesterday afternoon's downgrade was earned by real deterioration, and today's partial recovery is real too — I'm not anchoring to the worse number out of caution. But this is still a below-average grade, not a clean bill of health.

**The single biggest risk right now: NVDA carries a binary earnings event in 6 days (Tue 11/17, 5pm ET) stacked directly on top of an unresolved congressional governance overhang whose own RSVP deadline is today (11/11) — and the book has only $6.10 (12.4% of pool) of dry powder to absorb a bad outcome on either.** Three House committee chairs (Mast, Moolenaar, Crawford) have asked Huang for a closed-door briefing on his reported contact with a Megaspeed executive flagged by US intelligence as a possible Chinese asset, proposed for 11/18 — the day after NVDA's print — and gave Nvidia until today to accept or counter-propose. As of this run I find no confirmation either way. This is headline/governance risk layered on top of an already-live earnings binary, on the book's single largest named position.

---

## Live portfolio snapshot (ground truth, this run)

- **Total account value: $99.182179055** (cash $56.10 + equity $43.082179055)
- **Trading pool (per house capital rule — $50 base + accumulated P&L, the other ~$50 is off-limits reserve): $49.182179055 — a -$0.817820945 (-1.636%) accumulated loss.** A mild improvement vs. yesterday's 14:38 ET close (-2.483%) and roughly in line with this morning's earlier pre-market reading (~-1.3 to -1.8% depending on snapshot time).
- **Deployable cash remaining in the pool: $6.10 (12.40% of pool)** — unchanged, still thin.
- **Equity deployed: $43.082179055 (87.60% of pool).**

| Holding | Qty | Live px | Position $ | % of equity | % of pool | Today's move |
|---|---|---|---|---|---|---|
| NVDA | 0.024826 | $173.965 | $4.319 | 10.03% | 8.78% | **+3.01%** (still -3.35% below the $180 contingency line) |
| VTI | 0.036690 | $372.40 | $13.663 | 31.72% | 27.80% | +0.77% |
| VXUS | 0.154525 | $82.995 | $12.825 | 29.78% | 26.08% | +0.41% |
| OMCL | 0.106405 | $36.05 | $3.836 | 8.91% | 7.80% | +0.42% (**+2.30% buffer above MS's $35.24 bear line**) |
| XLE | 0.086775 | $62.395 | $5.414 | 12.57% | 11.01% | +0.30% |
| GEHC | 0.036393 | $83.025 | $3.023 | 7.02% | 6.15% | **-0.75%** (only red holding today) |
| Cash | — | — | $6.10 | — | 12.40% | — |

Concentration triggers re-checked fresh: **NVDA+OMCL combined = 18.93% of equity** (trigger at ~25%, buffer ~6.07pp, unchanged direction) — clean. **NVDA single-name = 10.03% of equity** (trigger 18-20%) — clean, well inside. **GEHC vs. BR's 4%-of-pool target = 6.15%, a +2.15pp overweight** (partial-trim trigger at 7.5%/+3.5pp drift — buffer ~1.35pp) — narrower than yesterday's +2.25pp but still the largest standing policy gap on the sheet, now the seventh-plus consecutive report flagging it unresolved.

---

## Correlation analysis

The headline NVDA weight (10.03% of equity) understates this book's true AI/mega-cap-growth factor loading, and I want to say that plainly rather than let the single-name trigger numbers imply more diversification than exists. VTI is cap-weighted — its top holdings are the same mega-cap AI/tech names (NVDA, MSFT, AAPL, GOOG, META, AMZN) that make up roughly 35-40% of the fund by weight. That means VTI's 31.72%-of-equity sleeve is itself carrying an estimated ~11-13pp of *indirect* AI-mega-cap exposure on top of NVDA's own 10.03% direct stake. **Effective AI/mega-cap-growth factor exposure is closer to ~21-23% of equity, not 10%** — more than double what the single-name concentration trigger alone would suggest, and meaningfully closer to the 25% combined-concentration ceiling than the clean NVDA+OMCL reading implies once this look-through is counted.

Beyond that factor concentration: NVDA and OMCL are both AI/tech-adjacent growth names and have moved together on rate-driven multiple-compression days throughout this book's history (see repeated same-session NVDA $180 / OMCL $35.24 line tests this week) — their correlation is high on macro/rate days, lower on name-specific catalyst days (e.g., OMCL's own earnings). XLE is the one holding with genuine, demonstrated decorrelation from the rest of the book (it flipped green against an all-red tape as recently as 11/10 afternoon) — this remains the book's only real internal diversifier beyond the VTI/VXUS core, and is worth preserving for that reason alone, independent of its own commodity-factor risk (see Hedging, below). VXUS is only loosely correlated to the US sleeve day-to-day but shares the same risk-on/risk-off macro regime sensitivity in stress scenarios (see Recession stress test).

---

## Sector concentration (% of equity, direct exposure)

| Sector | Holdings | % of equity |
|---|---|---|
| Technology / Semis (direct) | NVDA | 10.03% |
| Healthcare (direct) | OMCL + GEHC | 15.92% |
| Energy (direct) | XLE | 12.57% |
| Diversified US equity (cap-weighted, ~35-40% tech-tilted) | VTI | 31.72% |
| Diversified international equity | VXUS | 29.78% |

Named-sector concentration alone looks diversified. It is not, once VTI's internal tilt is counted (see Correlation analysis) — true technology/AI-correlated exposure is closer to a fifth of the book than a tenth. Healthcare at 15.92% direct is split between a small-cap healthcare-IT name (OMCL) and a mid-cap healthcare-device name (GEHC) with genuinely different risk profiles (see Interest rate sensitivity, Liquidity) — grouping them as one "sector" bucket for position-sizing purposes would be a mistake.

## Geographic exposure and currency risk

- **US-domiciled/listed: ~70.25% of equity** (NVDA + OMCL + XLE + GEHC + VTI, all of which trade and report in USD).
- **International (ex-US, via VXUS): ~29.78% of equity**, unhedged. VXUS's typical composition skews ~75-80% developed markets (Japan, UK, broad Europe) and ~20-25% emerging markets (China, Taiwan, India) — meaning an estimated **~6-7% of total equity sits in unhedged EM currency risk** (JPY, EUR, GBP, and EM-currency baskets), on top of the developed-market FX exposure.
- **GEHC carries a second layer of currency risk the sector table doesn't show**: GE HealthCare sells diagnostic imaging and monitoring equipment globally, with a meaningful share of revenue earned outside the US — so even though it is a 100% US-domiciled, USD-denominated holding, its *earnings* carry real FX-translation sensitivity that the "US-domiciled" label obscures.
- Net: this book has no currency hedge of any kind (equities-only toolbox, no FX instruments available), and a broad dollar-strengthening move (plausible under the Fed's current hold-steady-to-hawkish posture per BR's 3.75-4.00% confirmed range) would be a genuine, if secondary, headwind to the ~30% of equity sitting in VXUS.

## Interest rate sensitivity by position

| Holding | Rate sensitivity | Why |
|---|---|---|
| NVDA | **High** | Long-duration growth multiple; MS's DCF already shows it richly valued at current WACC assumptions — a rate-up move hits both the discount rate and the multiple simultaneously |
| OMCL | **High** | Small-cap, SaaS-like recurring-revenue healthcare-tech — same long-duration multiple-compression dynamic as NVDA, amplified by thin liquidity on any repricing |
| VTI | **Moderate-High** | Cap-weighted toward the same long-duration mega-cap growth names driving NVDA's own sensitivity — the fund-level "market beta" undersells its true rate sensitivity |
| VXUS | **Moderate** | Less mega-cap-growth-weighted than VTI, but EM sleeve adds USD-strength/Fed-policy sensitivity on top of local rate cycles |
| GEHC | **Moderate** | Carries real balance-sheet leverage (inherited from the GE spin-off) — rate moves affect interest expense directly, and hospital-customer capex cycles are credit-sensitive |
| XLE | **Low (direct)** | Cash-flow-generative value sector, short-duration earnings profile — primary driver is oil price, not discount rates; the main rate linkage is indirect (growth-slowdown → demand) |

**House context**: BR's most recent macro read (relayed via state.md, no fresher dateline found this run — the chronic same-day dateline wall holds again today for Fed/10yr levels) has the Fed funds range confirmed at 3.75-4.00% (set at the 10/28 FOMC, Cook/Hammack dissenting for a hike) and the 10yr at ~4.86-4.90% as of 11/6 — only ~11-15bp from rule 6a's 4.75% rate-shock-pause reopening threshold, the closest reading since the pause began 9/2. A fresh WebSearch this run found nothing dated to today confirming either figure has moved; I'm carrying BR's last-verified numbers forward rather than fabricating a same-day print I can't source. **This remains the single most proximate macro trigger in the book** — if it fires, NVDA/OMCL/VTI's long-duration sleeve (collectively >70% of equity once VTI's tilt is counted) is where it bites hardest.

## Recession stress test (illustrative drawdown estimate, not a forecast)

Using rough historical sector drawdown ranges from 2008/2020/2022 as benchmarks, scaled to current weights:

| Holding | Est. recession drawdown | Weight (equity) | Weighted contribution |
|---|---|---|---|
| NVDA | -52% (midpoint of a -45% to -60% range; elevated AI-capex valuation cuts both ways) | 10.03% | -5.22pp |
| VTI | -30% (2020 COVID-style broad-market benchmark) | 31.72% | -9.52pp |
| VXUS | -32% (similar to US, plus EM/currency drag in a flight-to-safety dollar rally) | 29.78% | -9.53pp |
| OMCL | -35% (small-cap beta + thin liquidity amplification, partly offset by defensive healthcare end-market) | 8.91% | -3.12pp |
| XLE | -40% (energy's historically severe recession-demand sensitivity, 2008/2020-style) | 12.57% | -5.03pp |
| GEHC | -22% (more defensive — recurring service/consumables revenue is sticky even if equipment capex is deferred) | 7.02% | -1.54pp |
| **Portfolio (equity-weighted)** | | | **≈ -34.0%** |

Translated to the pool: equity is 87.6% of the $49.18 pool, so a recession-grade equity bear market would be expected to take roughly **-29.8% off the pool** — turning today's modest -1.6% loss into something on the order of a **-31% loss versus the original $50 base**. That is a materially different number than the account's current calm state suggests, and it's the kind of gap radical transparency exists to surface before it's live.

## Liquidity risk rating by holding

| Holding | Liquidity risk | Basis |
|---|---|---|
| NVDA | **Very Low** | Mega-cap, hyper-liquid, consistently tight spreads even pre-market |
| VTI | **Very Low** | Massive-AUM ETF, deepest liquidity in the book |
| XLE | **Low** | Large, liquid sector ETF |
| VXUS | **Low** | Large-AUM international ETF, slightly wider spreads than VTI but still liquid |
| GEHC | **Moderate** | Mid/large-cap but has shown genuinely wide pre-market spreads this week ($82.51/$84.84 cited 11/10) — fine intraday, thin at the open |
| OMCL | **Moderate-High** | Small-cap (~$1.5-2B), the book's thinnest name by a wide margin — pre-market spreads have been seen as wide as $32.47/$39.77 (a >20% quoted spread), meaning any forced exit outside regular-session hours could realize a materially worse price than the last quote |

**This is a standing structural weakness, not a one-off**: the house's own rule 4 (don't size off pre-market quotes for thin names) exists precisely because OMCL and GEHC repeatedly show unusable pre-market liquidity. If this book ever needs to raise cash fast, sequence the liquid sleeve (VTI/VXUS/XLE) first and treat OMCL as the position most likely to cost real slippage on a rushed exit.

## Single stock risk and position sizing

- **NVDA (10.03% equity / 8.78% pool):** within both the single-name (18-20%) and combined (25%) concentration triggers, but it is the book's only position with a dated, binary catalyst inside the next week (11/17 print) *and* an active, unresolved governance/headline risk (today's RSVP deadline). Sizing itself is fine by policy; the risk here is event-clustering, not weight. No new adds pre-print per the existing contingency plan — correctly already house policy, reaffirming it.
- **OMCL (8.91% equity / 7.80% pool):** small weight, but disproportionate idiosyncratic risk given thin liquidity (above) — a position this size in a name this illiquid can move the realized P&L more than its weight implies. The OMCL DCA/profit-gate correctly keeps this from growing until the pool is genuinely net-positive; that discipline should hold.
- **GEHC (7.02% equity / 6.15% pool):** the most overweight name relative to its own named policy target (+2.15pp vs. BR's 4%-of-pool line), now flagged in eight-plus consecutive cross-desk reports without the mechanical 7.5%/+3.5pp trigger actually firing. I'll say this plainly as the team skeptic: a gap that never closes and never triggers starts to look like the trigger threshold itself needs revisiting, not like the gap is fine. Recommend BR consider either tightening the trigger or formally re-setting the target, rather than carrying an acknowledged-but-inactionable gap indefinitely.
- **XLE (12.57% equity / 11.01% pool):** structurally this is a single-factor (oil price) bet sized larger than NVDA, wrapped in ETF packaging that makes it look diversified. It isn't — XOM+CVX alone are a large share of the fund. Size is within the house's original half-size-satellite intent, but worth naming plainly: this is the second-largest concentrated risk factor in the book after the AI/mega-growth factor.

## Tail risk scenarios (probability estimates, house-skeptic framing)

| Scenario | Rough probability (next 1-4 weeks unless noted) | Est. impact |
|---|---|---|
| NVDA 11/17 earnings miss or guide-down vs. the $108.0B±2% band | ~15-20% | -15% to -25% on NVDA (~-1.5 to -2.5pp of pool) |
| NVDA beats cleanly but stock still falls/gives back gains (JPM's own empirical note: 4 of last 5 beats did exactly this) | ~40-50% (higher than a structural miss, lower-magnitude) | -5% to -10% on NVDA |
| Huang/Megaspeed briefing escalates (declined RSVP, subpoena threat, fresh spy-link reporting) in the next 1-2 weeks | ~10-15% | -5% to -15% single-day NVDA move, sentiment-driven not fundamental |
| 10yr crosses back above the 4.75% rate-shock threshold (currently ~11-15bp away) in the next 2-4 weeks | ~30-35% given proximity | -5% to -8% portfolio-wide, concentrated in VTI/NVDA/OMCL's long-duration sleeve |
| Oil demand-shock / recession-driven energy selloff | ~15% over the next 1-3 months | -15% to -20% on XLE specifically |
| OMCL thin-liquidity gap move (>10% single session, either direction) | ~10% over the next month | ~1pp of pool, worse if forced to exit into it |
| Full recession onset (12-month horizon) | ~20-25% (genuinely uncertain, flagged as a placeholder not a forecast) | ≈-30% of pool, per stress test above |

## Hedging strategies for the top 3 risks (equities-only toolbox, no options)

1. **NVDA/AI-factor concentration into the 11/17 print + governance overhang.** No options are available to hedge the binary event directly. The only equities-only lever is exposure reduction or cash-buffer preservation: hold deployable cash flat (don't deploy the remaining $6.10 into anything AI/tech-adjacent before the print), and treat any further NVDA-correlated add (including within VTI's own tilt) as something to actively avoid this week, not just a neutral default.
2. **Rate-shock/duration risk across VTI/NVDA/OMCL's long-duration sleeve.** XLE is, whether or not it was designed this way, the book's only real natural hedge against this — energy/value typically outperforms growth in a rate-up regime, and it already decoupled from the rest of the book on 11/10. Recommend explicitly *not* trimming XLE to fund anything else while this rate-shock risk is live; its diversification value right now exceeds its standalone commodity-bet risk.
3. **OMCL/GEHC illiquidity compounding a forced exit.** The hedge here is sequencing, not a new position: if the pool ever needs to raise cash under pressure, draw from the liquid VTI/VXUS/XLE sleeve first and treat OMCL in particular as the position to exit last and most carefully (smaller clips, regular-session only, never off a pre-market quote).

## Rebalancing suggestions

- **GEHC: hold, do not add** — already +2.15pp over BR's 4% target with only ~1.35pp of runway to the formal trim trigger. No action needed yet, but flagging again (eighth-plus consecutive report) that this gap is structural, not noise, and the trigger threshold deserves a fresh look from BR rather than another cycle of acknowledgment-without-action.
- **NVDA: hold, no pre-print resizing** — at 8.78% of pool it remains under BR's previously-set ~11% pool target, so there is nominal room, but event-clustering risk (earnings + governance deadline) argues against using that room this week regardless of price action.
- **XLE: hold, do not trim** — preserve as the book's one genuine diversification/rate-hedge holding (see above).
- **OMCL: hold, no add** — DCA/profit gate correctly blocks this while the pool is net-negative; don't override it on price alone.
- **Cash: hold the $6.10 buffer flat into the 11/17 print and today's governance deadline** — this is not the week to compress the only dry powder in the book further.

---

*Prepared by BW Risk Assessment, Bridgewater-style radical-transparency desk. Figures verified live via Robinhood `get_portfolio`/`get_equity_positions`/`get_equity_quotes` on account 424593861 at run time; macro figures (Fed funds, 10yr) carried forward from BR's last-verified 11/6 read per the standing same-day dateline-wall note — no fresher print found this run despite a dedicated WebSearch. Sources: [House Chairs Ask Nvidia CEO Jensen Huang for Closed-Door Briefing](https://letsdatascience.com/news/house-chairs-ask-nvidia-ceo-jensen-huang-for-closed-door-bri-d3ca0fdc), [House Republicans Press Nvidia's Huang for Nov. 18 China Briefing](https://valueaddvc.com/pulse/nvidia-huang-china-briefing-congress-2026), [Nvidia pushes back: House chairs seek Jensen Huang](https://www.aichatdaily.com/ai-security/nvidia-pushes-back-house-chairs-seek-jensen-huang).*
